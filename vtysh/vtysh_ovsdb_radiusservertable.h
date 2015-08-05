/*
 Copyright (C) 2015 Hewlett Packard Enterprise Development LP
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License"); you may
 not use this file except in compliance with the License. You may obtain
 a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 License for the specific language governing permissions and limitations
 under the License.
*/
/****************************************************************************
 * @file vtysh_ovsdb_radiusservertable.h
 * Source for registering client callback with radius server table.
 *
 ***************************************************************************/

#ifndef VTYSH_OVSDB_SUBSYSTEMTABLE_H
#define VTYSH_OVSDB_SUBSYSTEMTABLE_H

int vtysh_ovsdb_init_radiusservertableclients();
vtysh_ret_val vtysh_ovsdb_radiusservertable_clientcallback(void *p_private);

#endif /* VTYSH_OVSDB_SUBSYSTEMTABLE_H */