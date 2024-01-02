/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getMethod.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbouwach <wbouwach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:40:54 by wbouwach          #+#    #+#             */
/*   Updated: 2023/12/26 19:06:42 by wbouwach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETMETHOD_HPP
# define GETMETHOD_HPP

# include "../req_res_post/request.hpp"
# include "../req_res_post/respons.hpp"
# include "../req_res_post/post.hpp"
# include "../req_res_post/macro.hpp"

# include "../config_file/configFile.hpp"
# include <sys/stat.h>
# include <sstream>
# include <fstream>

void get_method(request &req, respons &res, manyServer *server);
#endif