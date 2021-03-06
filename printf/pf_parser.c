/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <dfonarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 23:57:45 by dfonarev          #+#    #+#             */
/*   Updated: 2019/05/02 23:57:46 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	save_flag(char **format, t_pf_options *opt)
{
	if (**format == '#')
		opt->hash = 1;
	else if (**format == '0' && !opt->right)
		opt->pad = '0';
	else if (**format == '-')
	{
		opt->right = 1;
		opt->pad = ' ';
	}
	else if (**format == '+')
		opt->sign = '+';
	else if (**format == ' ' && !opt->sign)
		opt->sign = ' ';
	else if (**format == '\'')
		opt->apo = 1;
}

static void	save_widthprec(char **format, t_pf_options *opt, va_list ap)
{
	if (NUM(**format))
	{
		opt->width = ft_atoi(*format);
		while (NUM(**format) && NUM(*(*format + 1)))
			(*format)++;
	}
	else if (**format == '*')
		opt->width = va_arg(ap, int);
	if (**format == '.')
	{
		opt->prec = 0;
		if (NUM(*(*format + 1)))
		{
			(*format)++;
			opt->prec = ft_atoi(*format);
			while (NUM(**format) && NUM(*(*format + 1)))
				(*format)++;
		}
		else if (*(*format + 1) == '*')
		{
			(*format)++;
			opt->prec = va_arg(ap, int);
		}
	}
}

static void	save_len(char **format, t_pf_options *opt)
{
	if (**format == 'h')
	{
		if (*(*format + 1) == 'h')
		{
			opt->len = 1;
			(*format)++;
		}
		else
			opt->len = 2;
	}
	else if (**format == 'l')
	{
		if (*(*format + 1) == 'l')
		{
			opt->len = 4;
			(*format)++;
		}
		else
			opt->len = 3;
	}
	else if (**format == 'L')
		opt->len = 5;
}

static void	save_base(unsigned char spec, t_pf_options *opt)
{
	if (pf_elf(spec) == 10)
		opt->base = 10;
	else if (spec == 'o')
		opt->base = 8;
	else if (spec == 'x' || spec == 'X' || spec == 'p')
		opt->base = 16;
	else if (spec == 'b')
		opt->base = 2;
}

void		pf_parser(char **format, t_pf_options *opt, va_list ap)
{
	while (*(++*format))
	{
		if (pf_elf(**format) == 1)
			save_flag(format, opt);
		else if ((NUM(**format)) || **format == '.' || **format == '*')
		{
			save_widthprec(format, opt, ap);
			opt->right = (opt->width < 0) ? 1 : opt->right;
			opt->width *= (opt->width < 0) ? -1 : 1;
		}
		else if (pf_elf(**format) == -1)
			save_len(format, opt);
		else if (pf_elf(**format) >= 10)
		{
			opt->spec = **format;
			if (pf_elf(opt->spec) == 100)
				opt->spec += 32;
			if (opt->spec == 'p')
				pf_pointer_opt(opt);
			if (opt->spec == 'g')
				opt->prun = 1;
			save_base(opt->spec, opt);
			break ;
		}
	}
}
