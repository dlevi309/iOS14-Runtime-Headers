/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFSQLQueryGenerator : NSObject
+(id)traverseKeypath:(id)arg1 keyPropertyMapper:(id)arg2 previousExpressionGenerator:(id)arg3 ;
+(id)selectExpressionGeneratorForReturnObjectKeypath:(id)arg1 propertyMapper:(id)arg2 ;
+(id)expressionGeneratorsForSortDescriptors:(id)arg1 propertyMapper:(id)arg2 ;
+(id)compiledSQLQueryWithPredicateNodes:(id)arg1 selectGenerators:(id)arg2 orderByGenerators:(id)arg3 selectAll:(BOOL)arg4 ;
+(id)getChildrenFromPropertyMapper:(id)arg1 previousTable:(id)arg2 previousExpressionGenerator:(id)arg3 ;
+(id)sqlQueryForReturnObjectKeypaths:(id)arg1 query:(id)arg2 propertyMapper:(id)arg3 ;
@end

