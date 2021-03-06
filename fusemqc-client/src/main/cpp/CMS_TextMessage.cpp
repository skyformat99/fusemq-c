/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <CMS_Message.h>
#include <CMS_TextMessage.h>

#include <Config.h>
#include <private/CMS_Types.h>
#include <private/CMS_Utils.h>

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_STRINGS_H
#include <strings.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif

#include <memory>

////////////////////////////////////////////////////////////////////////////////
cms_status cms_getMessageText(CMS_Message* message, char* dest, int size) {

    cms_status result = CMS_ERROR;

    if(message != NULL && message->message != NULL && dest != NULL && size > 0) {

        if( message->type != CMS_TEXT_MESSAGE ) {
            return CMS_INVALID_MESSAGE_TYPE;
        }

        try{

            cms::TextMessage* txtMessage = dynamic_cast<cms::TextMessage*>( message->message );

            std::string msgText = txtMessage->getText();

            if(!msgText.empty()) {

                std::size_t pos = 0;
                for(; pos < msgText.size() && pos < (std::size_t)size - 1; ++pos) {
                    dest[pos] = msgText.at(pos);
                }

                dest[pos] = '\0';
            } else {
                dest[0] = '\0';
            }

            result = CMS_SUCCESS;

        }
        CMS_CATCH_EXCEPTION( result )
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////
cms_status cms_setMessageText(CMS_Message* message, const char* value) {

    cms_status result = CMS_ERROR;

    if(message != NULL && message->message != NULL && value != NULL) {

        if( message->type != CMS_TEXT_MESSAGE ) {
            return CMS_INVALID_MESSAGE_TYPE;
        }

        try{

            cms::TextMessage* txtMessage = dynamic_cast<cms::TextMessage*>( message->message );

            if(strlen(value) > 0) {
                txtMessage->setText(value);
            } else {
                txtMessage->setText("");
            }

            result = CMS_SUCCESS;

        }
        CMS_CATCH_EXCEPTION( result )
    }

    return result;
}
