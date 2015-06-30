//
//  QNNetworkInfo.h
//  HappyDNS
//
//  Created by bailong on 15/6/25.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>

extern const int kQNNO_NETWORK;
extern const int kQNWIFI;
extern const int kQNMOBILE;

extern const int kQNISP_GENERAL;
extern const int kQNISP_CTC;
extern const int kQNISP_DIANXIN;
extern const int kQNISP_CNC;
extern const int kQNISP_LIANTONG;
extern const int kQNISP_CMCC;
extern const int kQNISP_YIDONG;
extern const int kQNISP_OTHER;

@interface QNNetworkInfo : NSObject

@property (readonly) int networkConnection;
@property (readonly) int provider;

- (instancetype)init:(int)connecton provider:(int)provider;

+ (instancetype)noNet;

+ (instancetype)normal;
@end
