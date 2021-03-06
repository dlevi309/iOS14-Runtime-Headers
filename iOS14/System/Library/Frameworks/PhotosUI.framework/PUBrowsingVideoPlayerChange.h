/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingVideoPlayerChange : PUViewModelChange {

	BOOL _playStateDidChange;
	BOOL _desiredPlayStateDidChange;
	BOOL _isPlayingAllowedDidChange;
	BOOL _isActivatedDidChange;
	BOOL _isPlayerLoadingAllowedDidChange;
	BOOL _avPlayerDidChange;
	BOOL _playerItemDidChange;
	BOOL _errorDidChange;
	BOOL _isAtBeginningDidChange;
	BOOL _isAtEndDidChange;
	BOOL _isStalledDidChange;
	BOOL _alwaysRespectsMuteSwitchDidChange;
	BOOL _isPlayableDidChange;
	BOOL _isMutedDidChange;
	BOOL _audioStatusDidChange;
	BOOL _audioSessionVolumeIncreaseDidOccur;

}

@property (assign,setter=_setPlayStateDidChange:,nonatomic) BOOL playStateDidChange;                                              //@synthesize playStateDidChange=_playStateDidChange - In the implementation block
@property (assign,setter=_setDesiredPlayStateDidChange:,nonatomic) BOOL desiredPlayStateDidChange;                                //@synthesize desiredPlayStateDidChange=_desiredPlayStateDidChange - In the implementation block
@property (assign,setter=_setPlayingAllowedDidChange:,nonatomic) BOOL isPlayingAllowedDidChange;                                  //@synthesize isPlayingAllowedDidChange=_isPlayingAllowedDidChange - In the implementation block
@property (assign,setter=_setActivatedDidChange:,nonatomic) BOOL isActivatedDidChange;                                            //@synthesize isActivatedDidChange=_isActivatedDidChange - In the implementation block
@property (assign,setter=_setPlayerLoadingAllowedDidChange:,nonatomic) BOOL isPlayerLoadingAllowedDidChange;                      //@synthesize isPlayerLoadingAllowedDidChange=_isPlayerLoadingAllowedDidChange - In the implementation block
@property (assign,setter=_setAVPlayerDidChange:,nonatomic) BOOL avPlayerDidChange;                                                //@synthesize avPlayerDidChange=_avPlayerDidChange - In the implementation block
@property (assign,setter=_setPlayerItemDidChange:,nonatomic) BOOL playerItemDidChange;                                            //@synthesize playerItemDidChange=_playerItemDidChange - In the implementation block
@property (assign,setter=_setErrorDidChange:,nonatomic) BOOL errorDidChange;                                                      //@synthesize errorDidChange=_errorDidChange - In the implementation block
@property (assign,setter=_setAtBeginningDidChange:,nonatomic) BOOL isAtBeginningDidChange;                                        //@synthesize isAtBeginningDidChange=_isAtBeginningDidChange - In the implementation block
@property (assign,setter=_setAtEndDidChange:,nonatomic) BOOL isAtEndDidChange;                                                    //@synthesize isAtEndDidChange=_isAtEndDidChange - In the implementation block
@property (assign,setter=_setStalledDidChange:,nonatomic) BOOL isStalledDidChange;                                                //@synthesize isStalledDidChange=_isStalledDidChange - In the implementation block
@property (assign,setter=_setAlwaysRespectsMuteSwitchDidChange:,nonatomic) BOOL alwaysRespectsMuteSwitchDidChange;                //@synthesize alwaysRespectsMuteSwitchDidChange=_alwaysRespectsMuteSwitchDidChange - In the implementation block
@property (assign,setter=_setPlayableDidChange:,nonatomic) BOOL isPlayableDidChange;                                              //@synthesize isPlayableDidChange=_isPlayableDidChange - In the implementation block
@property (assign,setter=_setIsMutedDidChange:,nonatomic) BOOL isMutedDidChange;                                                  //@synthesize isMutedDidChange=_isMutedDidChange - In the implementation block
@property (assign,setter=_setAudioStatusDidChange:,nonatomic) BOOL audioStatusDidChange;                                          //@synthesize audioStatusDidChange=_audioStatusDidChange - In the implementation block
@property (assign,setter=_setAudioSessionVolumeIncreaseDidOccur:,nonatomic) BOOL audioSessionVolumeIncreaseDidOccur;              //@synthesize audioSessionVolumeIncreaseDidOccur=_audioSessionVolumeIncreaseDidOccur - In the implementation block
-(BOOL)isStalledDidChange;
-(BOOL)isActivatedDidChange;
-(BOOL)playStateDidChange;
-(BOOL)desiredPlayStateDidChange;
-(void)_setAVPlayerDidChange:(BOOL)arg1 ;
-(void)_setPlayingAllowedDidChange:(BOOL)arg1 ;
-(void)_setAudioStatusDidChange:(BOOL)arg1 ;
-(void)_setPlayerLoadingAllowedDidChange:(BOOL)arg1 ;
-(void)_setErrorDidChange:(BOOL)arg1 ;
-(void)_setPlayerItemDidChange:(BOOL)arg1 ;
-(void)_setAudioSessionVolumeIncreaseDidOccur:(BOOL)arg1 ;
-(void)_setDesiredPlayStateDidChange:(BOOL)arg1 ;
-(void)_setPlayStateDidChange:(BOOL)arg1 ;
-(void)_setPlayableDidChange:(BOOL)arg1 ;
-(void)_setStalledDidChange:(BOOL)arg1 ;
-(void)_setAtEndDidChange:(BOOL)arg1 ;
-(void)_setAtBeginningDidChange:(BOOL)arg1 ;
-(void)_setActivatedDidChange:(BOOL)arg1 ;
-(void)_setAlwaysRespectsMuteSwitchDidChange:(BOOL)arg1 ;
-(void)_setIsMutedDidChange:(BOOL)arg1 ;
-(BOOL)isPlayingAllowedDidChange;
-(BOOL)isPlayerLoadingAllowedDidChange;
-(BOOL)errorDidChange;
-(BOOL)avPlayerDidChange;
-(BOOL)isAtBeginningDidChange;
-(BOOL)isAtEndDidChange;
-(BOOL)alwaysRespectsMuteSwitchDidChange;
-(BOOL)isPlayableDidChange;
-(BOOL)isMutedDidChange;
-(BOOL)audioStatusDidChange;
-(BOOL)audioSessionVolumeIncreaseDidOccur;
-(BOOL)playerItemDidChange;
-(BOOL)hasChanges;
@end

