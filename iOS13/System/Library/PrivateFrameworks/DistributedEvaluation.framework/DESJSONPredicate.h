/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@interface DESJSONPredicate : NSObject
+(BOOL)evaluatePredicate:(id)arg1 onObj:(id)arg2 ;
+(id)parsePath:(id)arg1 ;
+(id)fetchObjectAtPath:(id)arg1 from:(id)arg2 ;
+(BOOL)_testStrings:(id)arg1 test:(id)arg2 caseInsensitive:(BOOL)arg3 ;
+(BOOL)obj:(id)arg1 matchesRegex:(id)arg2 ;
+(BOOL)isNumber:(id)arg1 ;
+(BOOL)isBoolean:(id)arg1 ;
+(BOOL)isDate:(id)arg1 ;
+(BOOL)isDateTime:(id)arg1 ;
+(BOOL)isTime:(id)arg1 ;
+(BOOL)evaluateAnd:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateOr:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateBoolOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateDefOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateStringOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateRegexOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateNumericOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateArrayOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateTypeOp:(id)arg1 onObj:(id)arg2 ;
+(BOOL)evaluateDict:(id)arg1 onObj:(id)arg2 ;
+(id)parseJSON:(id)arg1 ;
+(BOOL)evaluateJson:(id)arg1 onJson:(id)arg2 ;
@end

