/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSHashTable;

@interface _HDAssertionRecord : NSObject {

	NSString* _assertionIdentifier;
	NSHashTable* _assertions;

}

@property (nonatomic,copy,readonly) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                         //@synthesize assertions=_assertions - In the implementation block
-(NSHashTable *)assertions;
-(NSString *)assertionIdentifier;
-(id)initWithAssertionIdentifier:(id)arg1 ;
@end

