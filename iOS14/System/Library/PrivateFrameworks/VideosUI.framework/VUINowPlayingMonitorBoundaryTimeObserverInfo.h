/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSUUID;

@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject {

	BOOL _notifiedOfEntry;
	double _time;
	NSUUID* _token;
	/*^block*/id _handler;

}

@property (assign,nonatomic) double time;                       //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL notifiedOfEntry;              //@synthesize notifiedOfEntry=_notifiedOfEntry - In the implementation block
@property (nonatomic,retain) NSUUID * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setToken:(NSUUID *)arg1 ;
-(NSUUID *)token;
-(id)handler;
-(BOOL)notifiedOfEntry;
-(void)setNotifiedOfEntry:(BOOL)arg1 ;
@end

