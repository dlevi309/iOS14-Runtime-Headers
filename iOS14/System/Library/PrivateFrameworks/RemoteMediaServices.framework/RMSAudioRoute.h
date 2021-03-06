/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class NSString;

@interface RMSAudioRoute : NSObject {

	BOOL _supportsVideo;
	BOOL _selected;
	NSString* _displayName;
	unsigned long long _macAddress;

}

@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL supportsVideo;                           //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(id)audioRoutesFromProtobufs:(id)arg1 ;
+(id)protobufsFromAudioRoutes:(id)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setMacAddress:(unsigned long long)arg1 ;
-(unsigned long long)macAddress;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)supportsVideo;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(BOOL)isEqualToAudioRoute:(id)arg1 ;
@end

