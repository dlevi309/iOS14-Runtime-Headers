/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIMediaPlayerItemStatus : NSObject <NSCopying> {

	NSString* _itemIdentifier;
	NSString* _storeID;
	NSString* _storeAlbumID;
	BOOL _hideDuration;
	double _currentTime;
	double _duration;
	long long _itemType;
	long long _playState;

}

@property (assign,nonatomic) double currentTime;                   //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hideDuration;                    //@synthesize hideDuration=_hideDuration - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long itemType;                   //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) long long playState;                  //@synthesize playState=_playState - In the implementation block
@property (nonatomic,copy) NSString * storeID;                     //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * storeAlbumID;                //@synthesize storeAlbumID=_storeAlbumID - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)currentTime;
-(NSString *)storeID;
-(long long)itemType;
-(void)setItemType:(long long)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(NSString *)storeAlbumID;
-(void)setStoreAlbumID:(NSString *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(long long)playState;
-(void)setPlayState:(long long)arg1 ;
-(void)setHideDuration:(BOOL)arg1 ;
-(BOOL)hideDuration;
@end

