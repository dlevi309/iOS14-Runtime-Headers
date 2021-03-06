/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSPlayer.h>
@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSArray, NSDictionary;


@protocol IKJSPlayer <JSExport>
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@required
-(void)setPlaybackRate:(double)arg1;
-(void)next;
-(void)setUserInfo:(id)arg1;
-(void)previous;
-(IKJSMediaItem *)currentMediaItem;
-(NSDictionary *)userInfo;
-(double)playbackRate;
-(id)init;
-(NSString *)playbackState;
-(void)present;
-(void)pause;
-(void)play;
-(void)stop;
-(void)setMuted:(BOOL)arg1;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(id)arg1;
-(void)seekToTime:(double)arg1;
-(BOOL)muted;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(id)arg1;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(id)arg1;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(id)arg1;
-(void)changeToMediaAtIndex:(unsigned long long)arg1;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;

@end


@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSArray, NSDictionary, NSMutableDictionary, IKAppPlayerBridge;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {

	IKJSPlaylist* _playlist;
	long long _playerState;
	BOOL _holdingSelfReference;
	NSMutableDictionary* _timedMetadataListeners;
	NSMutableDictionary* _timeListeners;
	NSMutableDictionary* _boundaryListeners;
	IKAppPlayerBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlayerBridge * bridge;                            //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,retain) NSDictionary * userInfo; 
-(void)setPlaybackRate:(double)arg1 ;
-(void)next;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)previous;
-(IKJSMediaItem *)currentMediaItem;
-(NSDictionary *)userInfo;
-(double)playbackRate;
-(id)init;
-(IKAppPlayerBridge *)bridge;
-(NSString *)playbackState;
-(void)present;
-(void)pause;
-(BOOL)dispatchEvent:(id)arg1 userInfo:(id)arg2 ;
-(void)play;
-(void)stop;
-(void)setMuted:(BOOL)arg1 ;
-(IKJSPlaylist *)playlist;
-(long long)state;
-(void)setPlaylist:(IKJSPlaylist *)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(BOOL)muted;
-(void)dealloc;
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1 ;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKDOMDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(NSDictionary *)arg1 ;
-(void)changeToMediaAtIndex:(unsigned long long)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(id)initWithAppContext:(id)arg1 bridge:(id)arg2 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(BOOL)_timedMetadataDidChangeWithExtraInfo:(id)arg1 ;
-(void)_removeManagedReference;
-(void)_addManagedReference;
@end

