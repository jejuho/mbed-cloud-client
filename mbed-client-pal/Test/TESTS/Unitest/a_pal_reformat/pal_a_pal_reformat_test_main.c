/*******************************************************************************
 * Copyright 2016, 2017 ARM Ltd.
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
 *******************************************************************************/

#include "pal_BSP.h"
#include "stdio.h"
#include "PlatIncludes.h"

void palSanityTestMain(void* network);


//create a public wapper to this & reduce this to one line 
int main(int argc, char * argv[])
{
    bspStatus_t status = BSP_SUCCESS;
    int err =0;
    void* context = NULL;
    status = initPlatformReformat(&context);
    if (BSP_SUCCESS == status)
    {
    	palSanityTestMain(context);
    }
    return status;
}
