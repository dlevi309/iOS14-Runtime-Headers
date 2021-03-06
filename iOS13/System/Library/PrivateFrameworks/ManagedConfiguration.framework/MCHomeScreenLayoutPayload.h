/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCHomeScreenLayoutPayload : MCPayload {

	NSArray* _layout;

}

@property (nonatomic,retain) NSArray * layout;              //@synthesize layout=_layout - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)parseIconsArray:(id)arg1 allowFolders:(BOOL)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(NSArray *)layout;
-(id)payloadDescriptionKeyValueSections;
-(void)setLayout:(NSArray *)arg1 ;
@end

