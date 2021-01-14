/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MRPlaybackQueueContextProtobuf, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	_MRPlaybackQueueContextProtobuf* _context;
	int _location;
	NSString* _queueIdentifier;
	NSString* _requestID;
	_MRNowPlayingPlayerPathProtobuf* _resolvedPlayerPath;
	BOOL _sendingPlaybackQueueTransaction;
	SCD_Struct_MR2 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
