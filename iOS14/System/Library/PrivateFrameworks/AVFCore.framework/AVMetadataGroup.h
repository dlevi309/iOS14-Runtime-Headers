/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSString, NSArray;

@interface AVMetadataGroup : NSObject

@property (nonatomic,readonly) NSString * classifyingLabel; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(void)initialize;
-(NSString *)uniqueID;
-(NSString *)classifyingLabel;
-(opaqueCMFormatDescriptionRef)copyFormatDescription;
-(NSArray *)items;
@end
