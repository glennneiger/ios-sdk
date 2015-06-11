//
//  Moltin.h
//  MoltinSDK iOS Example
//
//  Created by Gasper Rebernak on 08/06/15.
//  Copyright (c) 2015 Gasper Rebernak. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
#import "MoltinConstants.h"

typedef void (^MTAuthenitactionCallback)(BOOL, NSError *);


@interface MoltinAPIClient : AFHTTPSessionManager

@property (strong, nonatomic) NSString *publicId;

+ (instancetype)sharedClient;
- (void)authenticateWithPublicId:(NSString *) publicId andCallback:(MTAuthenitactionCallback) completion;
- (void)setAccessToken:(NSString *)accessToken;

- (void)get:(NSString *) URLString withParameters:(NSDictionary *) parameters callback:(void(^)(NSDictionary *response, NSError *error)) completion;

- (void)post:(NSString *) URLString withParameters:(NSDictionary *) parameters callback:(void(^)(NSDictionary *response, NSError *error)) completion;

- (void)put:(NSString *) URLString withParameters:(NSDictionary *) parameters callback:(void(^)(NSDictionary *response, NSError *error)) completion;

- (void)delete:(NSString *) URLString withParameters:(NSDictionary *) parameters callback:(void(^)(NSDictionary *response, NSError *error)) completion;

@end
