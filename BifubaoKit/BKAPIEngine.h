//
//  BKAPIEngine.h
//  BifubaoKit
//
//  Created by 0day on 14-3-11.
//  Copyright (c) 2014年 coinfo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BKRequest, BKResponse;

typedef void (^BKRequestCompletionBlock)(BKResponse *);

@interface BKAPIEngine : NSObject

@property (nonatomic, assign, getter = isErrorHandleEnable) BOOL  errorHandleEnable;    // default as YES.

+ (instancetype)defaultEngine;

- (void)sendRequest:(BKRequest *)request completion:(BKRequestCompletionBlock)hanler;

@end
