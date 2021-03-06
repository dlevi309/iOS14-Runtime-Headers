/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, NSData;

@interface TRIPBUninterpretedOption : TRIPBMessage

@property (nonatomic,retain) NSMutableArray * nameArray; 
@property (nonatomic,readonly) unsigned long long nameArray_Count; 
@property (nonatomic,copy) NSString * identifierValue; 
@property (assign,nonatomic) BOOL hasIdentifierValue; 
@property (assign,nonatomic) unsigned long long positiveIntValue; 
@property (assign,nonatomic) BOOL hasPositiveIntValue; 
@property (assign,nonatomic) long long negativeIntValue; 
@property (assign,nonatomic) BOOL hasNegativeIntValue; 
@property (assign,nonatomic) double doubleValue; 
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (nonatomic,copy) NSData * stringValue; 
@property (assign,nonatomic) BOOL hasStringValue; 
@property (nonatomic,copy) NSString * aggregateValue; 
@property (assign,nonatomic) BOOL hasAggregateValue; 
+(id)descriptor;
@end

