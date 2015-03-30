
/*
  +------------------------------------------------------------------------+
  | Zephir Language                                                        |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2015 Zephir Team (http://www.zephir-lang.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@zephir-lang.com so we can send you a copy immediately.      |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@zephir-lang.com>                     |
  +------------------------------------------------------------------------+
*/

#ifndef ZEPHIR_KERNEL_FCALL_EXT_H
#define ZEPHIR_KERNEL_FCALL_EXT_H

#define ZEPHIR_FCALL_TYPE_UNKNOWN 0
#define ZEPHIR_FCALL_TYPE_FUNC 1

typedef struct _zephir_fcall_info {
  int type;
  zend_class_entry *ce;
  const char *class_name;
  int class_length;
  const char *func_name;
  int func_length;
} zephir_fcall_info;

int zephir_call_function_opt(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache, zephir_fcall_info *info TSRMLS_DC);

#endif