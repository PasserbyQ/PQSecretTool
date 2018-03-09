//
//  PQSecretTool.h
//  PQSecretTool
//
//  Created by PasserbyQ on 2018/3/9.
//  Copyright © 2018年 PasserbyQ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PQSecretTool : NSObject

//base64加密
+ (NSString *)base64EncodedStringWithData:(NSData *)data;

//base64解密
+ (NSData *)base64DecodeDataWithString:(NSString *)string;

//MD5加密
+(NSString *)md5:(NSString *)str;

+ (NSData *)md5WithData:(NSData *)data;

//  des加密(加密/解密方式可在内部设置)
+ (NSString *)encryptWithString:(NSString *)str;

//  des解密(加密/解密方式可在内部设置)
+ (NSString *)decryptWithString:(NSString *)str;


@end
