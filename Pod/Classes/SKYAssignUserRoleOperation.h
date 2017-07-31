//
//  SKYAssignUserRoleOperation.h
//  SKYKit
//
//  Copyright 2017 Oursky Ltd.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "SKYOperation.h"

@class SKYRecord;

/// Undocumented
@interface SKYAssignUserRoleOperation : SKYOperation

/// Undocumented
@property (nonatomic, copy, nonnull) NSArray<NSString *> *userIDs;

/// Undocumented
@property (nonatomic, copy, nonnull) NSArray<NSString *> *roleNames;

/// Undocumented
@property (nonatomic, copy) void (^assignUserRoleCompletionBlock)
    (NSArray<NSString *> *userIDs, NSError *error);

/// Undocumented
+ (instancetype)operationWithUserIDs:(NSArray<NSString *> *)userIDs
                           roleNames:(NSArray<NSString *> *)roleNames;

@end