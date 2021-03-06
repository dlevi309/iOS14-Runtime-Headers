/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INMediaSearch, INPrivateSearchForMediaIntentData;


@protocol INSearchForMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) INPrivateSearchForMediaIntentData * privateSearchForMediaIntentData; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(INPrivateSearchForMediaIntentData *)privateSearchForMediaIntentData;
-(void)setPrivateSearchForMediaIntentData:(id)arg1;

@end

