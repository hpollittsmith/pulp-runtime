/*
 * Copyright (C) 2019 ETH Zurich, University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __RTIO_STDIO_H__
#define __RTIO_STDIO_H__

typedef int FILE;

#define stdin  ((FILE *) 1)
#define stdout ((FILE *) 2)
#define stderr ((FILE *) 3)

int puts(const char *s);

int printf(const char *format, ...);

int putchar(int c);

int puts(const char *s);

int sprintf(char *str, const char *fmt, ...) ;

int fputc(int c, FILE *stream);

#endif
