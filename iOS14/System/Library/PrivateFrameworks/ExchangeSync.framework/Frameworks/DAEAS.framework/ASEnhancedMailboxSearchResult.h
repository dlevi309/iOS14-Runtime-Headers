/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem {

	NSString* _className;

}

@property (nonatomic,retain) NSString * className;              //@synthesize className=_className - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(NSString *)className;
-(id)description;
-(void)setClassName:(NSString *)arg1 ;
-(BOOL)_isSearchResult;
@end

