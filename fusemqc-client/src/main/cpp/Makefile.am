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

cc_sources = \
    CMS_BytesMessage.cpp \
    CMS_Connection.cpp \
    CMS_ConnectionFactory.cpp \
    CMS_Destination.cpp \
    CMS_Message.cpp \
    CMS_MessageConsumer.cpp \
    CMS_MessageProducer.cpp \
    CMS_QueueBrowser.cpp \
    CMS_Session.cpp \
    CMS_TextMessage.cpp \
    cms.cpp


h_sources = \
    CMS_BytesMessage.h \
    CMS_Connection.h \
    CMS_ConnectionFactory.h \
    CMS_Destination.h \
    CMS_Message.h \
    CMS_MessageConsumer.h \
    CMS_MessageProducer.h \
    CMS_QueueBrowser.h \
    CMS_Session.h \
    CMS_TextMessage.h \
    Config.h \
    cms.h \
    private/CMS_Types.h \
    private/CMS_Utils.h


##
## Compiler / Linker Info
##

lib_LTLIBRARIES= libactivemq-c.la
libactivemq_c_la_SOURCES= $(h_sources) $(cc_sources)
libactivemq_c_la_CXXFLAGS= $(AMQ_CXXFLAGS)
libactivemq_c_la_LDFLAGS= -version-info $(ACTIVEMQ_LIBRARY_VERSION)
libactivemq_c_la_LIBADD= $(AMQ_LIBS)

##
## Packaging Info
##
library_includedir=$(includedir)/$(ACTIVEMQ_LIBRARY_NAME)-$(ACTIVEMQ_VERSION)
nobase_library_include_HEADERS = $(h_sources)
