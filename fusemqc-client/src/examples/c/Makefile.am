# ---------------------------------------------------------------------------
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The ASF licenses this file to You under the Apache License, Version 2.0
# (the "License"); you may not use this file except in compliance with
# the License.  You may obtain a copy of the License at
# 
# http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ---------------------------------------------------------------------------

main_example_sources = main.c

##
## Compiler / Linker Info
##

## Main Example
bin_PROGRAMS = example 
example_SOURCES = $(main_example_sources)
example_LDADD= $(AMQ_TEST_LIBS)
example_CFLAGS = $(AMQ_TEST_CFLAGS) -I$(srcdir)/../../main/cpp

## Simple Consumer
simple_consumer_sources = ./consumers/SimpleConsumer.c
noinst_PROGRAMS = simple_consumer 
simple_consumer_SOURCES = $(simple_consumer_sources)
simple_consumer_LDADD= $(AMQ_TEST_LIBS)
simple_consumer_CFLAGS = $(AMQ_TEST_CFLAGS) -I$(srcdir)/../../main/cpp

## Simple Producer
simple_producer_sources = ./producers/SimpleProducer.c
noinst_PROGRAMS += simple_producer 
simple_producer_SOURCES = $(simple_producer_sources)
simple_producer_LDADD= $(AMQ_TEST_LIBS)
simple_producer_CFLAGS = $(AMQ_TEST_CFLAGS) -I$(srcdir)/../../main/cpp