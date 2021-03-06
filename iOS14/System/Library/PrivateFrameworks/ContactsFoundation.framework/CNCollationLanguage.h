/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSArray, NSString;

@interface CNCollationLanguage : NSObject {

	NSArray* _sections;
	NSString* _lastCharacter;
	NSString* _firstCharacterAfterLanguage;

}

@property (readonly) NSArray * sections;                                  //@synthesize sections=_sections - In the implementation block
@property (readonly) NSString * lastCharacter;                            //@synthesize lastCharacter=_lastCharacter - In the implementation block
@property (readonly) NSString * firstCharacterAfterLanguage;              //@synthesize firstCharacterAfterLanguage=_firstCharacterAfterLanguage - In the implementation block
-(NSArray *)sections;
-(id)initWithSections:(id)arg1 lastCharacter:(id)arg2 firstCharacterAfterLanguage:(id)arg3 ;
-(NSString *)lastCharacter;
-(NSString *)firstCharacterAfterLanguage;
@end

