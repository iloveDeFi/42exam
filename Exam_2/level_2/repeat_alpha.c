/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:32:50 by bbessard          #+#    #+#             */
/*   Updated: 2023/05/19 14:38:00 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int alpha_index(char c)
{
    int index = 0;
    char str[] = "abcdefghijklmnopqrstuvwxyz";

    while(str[index])
    {
        if (c == str[index])
            return (index);
        index++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    int index; 

    if (ac == 2)
    {
        while(av[1][i])
        {
            index = alpha_index(av[1][i]);
            while (index >= 0)
            {
                write(1, &av[1][i], 1);
                index--;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}