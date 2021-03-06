/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray, NSSet;

@interface _IKDOMConditionalExpression : NSObject {

	BOOL _isNegated;
	NSArray* _operations;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
+(id)expressionFromString:(id)arg1 ;
+(id)parseExpressionsFromString:(id)arg1 ;
-(BOOL)passesForDataItem:(id)arg1 ;
-(id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(BOOL)arg3 ;
-(NSSet *)dependentPathStrings;
@end

