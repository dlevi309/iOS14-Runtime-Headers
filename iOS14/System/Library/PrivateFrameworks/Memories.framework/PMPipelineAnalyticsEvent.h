/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PMCoreAnalyticsEvent.h>
#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMPipelineAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {

	NSString* _songID;
	long long _moodID;
	NSString* _durationRequested;
	double _durationAchieved;
	NSString* _collectionClass;
	long long _assetCountRequested;
	long long _assetCountAchieved;
	long long _unsuccessfulDownloadCount;

}

@property (nonatomic,copy) NSString * songID;                                  //@synthesize songID=_songID - In the implementation block
@property (assign,nonatomic) long long moodID;                                 //@synthesize moodID=_moodID - In the implementation block
@property (assign,nonatomic) NSString * durationRequested;                     //@synthesize durationRequested=_durationRequested - In the implementation block
@property (assign,nonatomic) double durationAchieved;                          //@synthesize durationAchieved=_durationAchieved - In the implementation block
@property (nonatomic,copy) NSString * collectionClass;                         //@synthesize collectionClass=_collectionClass - In the implementation block
@property (assign,nonatomic) long long assetCountRequested;                    //@synthesize assetCountRequested=_assetCountRequested - In the implementation block
@property (assign,nonatomic) long long assetCountAchieved;                     //@synthesize assetCountAchieved=_assetCountAchieved - In the implementation block
@property (assign,nonatomic) long long unsuccessfulDownloadCount;              //@synthesize unsuccessfulDownloadCount=_unsuccessfulDownloadCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)songID;
-(id)eventName;
-(long long)moodID;
-(id)copy;
-(id)eventPayload;
-(void)setSongID:(NSString *)arg1 ;
-(void)setMoodID:(long long)arg1 ;
-(id)eventBySettingSongID:(id)arg1 ;
-(id)eventBySettingMoodID:(long long)arg1 ;
-(id)eventBySettingDurationRequested:(id)arg1 ;
-(id)eventBySettingDurationAchieved:(double)arg1 ;
-(id)eventBySettingCollectionClass:(id)arg1 ;
-(id)eventBySettingAssetCountRequested:(long long)arg1 ;
-(id)eventBySettingAssetCountAchieved:(long long)arg1 ;
-(id)eventBySettingUnsuccessfulDownloadCount:(long long)arg1 ;
-(void)setDurationRequested:(NSString *)arg1 ;
-(void)setDurationAchieved:(double)arg1 ;
-(void)setCollectionClass:(NSString *)arg1 ;
-(void)setAssetCountRequested:(long long)arg1 ;
-(void)setAssetCountAchieved:(long long)arg1 ;
-(void)setUnsuccessfulDownloadCount:(long long)arg1 ;
-(double)durationAchieved;
-(long long)assetCountRequested;
-(long long)assetCountAchieved;
-(long long)unsuccessfulDownloadCount;
-(NSString *)collectionClass;
-(NSString *)durationRequested;
@end

