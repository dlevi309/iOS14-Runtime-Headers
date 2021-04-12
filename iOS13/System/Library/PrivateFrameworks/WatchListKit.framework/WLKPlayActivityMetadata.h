/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSArray, NSNumber;

@interface WLKPlayActivityMetadata : NSObject {

	NSString* _key;
	unsigned long long _contentType;
	NSString* _externalShowID;
	NSString* _canonicalID;
	NSString* _canonicalShowID;
	NSString* _internalLegID;
	NSString* _overrideChannelID;
	NSArray* _siriActionsCategories;
	NSNumber* _isCurrentEpisode;
	NSNumber* _isShowClosed;

}

@property (nonatomic,readonly) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                    //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSString * externalShowID;                         //@synthesize externalShowID=_externalShowID - In the implementation block
@property (nonatomic,readonly) NSString * canonicalID;                            //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,readonly) NSString * canonicalShowID;                        //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
@property (nonatomic,readonly) NSString * internalLegID;                          //@synthesize internalLegID=_internalLegID - In the implementation block
@property (nonatomic,readonly) NSString * overrideChannelID;                      //@synthesize overrideChannelID=_overrideChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * siriActionsCategories;              //@synthesize siriActionsCategories=_siriActionsCategories - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isCurrentEpisode;                  //@synthesize isCurrentEpisode=_isCurrentEpisode - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isShowClosed;                      //@synthesize isShowClosed=_isShowClosed - In the implementation block
-(NSString *)key;
-(unsigned long long)contentType;
-(NSString *)canonicalID;
-(NSArray *)siriActionsCategories;
-(id)initWithKey:(id)arg1 dictionary:(id)arg2 ;
-(NSString *)canonicalShowID;
-(NSString *)externalShowID;
-(NSString *)internalLegID;
-(NSString *)overrideChannelID;
-(NSNumber *)isCurrentEpisode;
-(NSNumber *)isShowClosed;
@end
