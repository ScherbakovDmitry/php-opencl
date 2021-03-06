/**
 * The OpenCL PHP extension
 *
 * @package     php-opencl
 * @author      Ryusuke SEKIYAMA <rsky0711@gmail.com>
 * @copyright   2012 Ryusuke SEKIYAMA
 * @license     http://www.opensource.org/licenses/mit-license.php  MIT License
 */

#include "php_opencl.h"

#ifndef PHPCL_KERNEL_H
#define PHPCL_KERNEL_H
BEGIN_EXTERN_C()

PHPCL_FUNCTION(cl_get_kernel_info);
PHPCL_FUNCTION(cl_create_kernel);

PHPCL_LOCAL cl_int
phpcl_set_kernel_arg(cl_kernel kernel, cl_uint arg_index,
                     zval *arg_value, phpcl_c_type_t type TSRMLS_DC);

END_EXTERN_C()
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
