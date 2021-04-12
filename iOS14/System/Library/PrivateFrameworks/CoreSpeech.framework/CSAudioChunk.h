/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSData;

@interface CSAudioChunk : NSObject {

	NSData* _data;
	unsigned long long _numChannels;
	unsigned long long _numSamples;
	unsigned long long _sampleByteDepth;
	unsigned long long _startSampleCount;
	unsigned long long _hostTime;
	NSData* _remoteVAD;

}

@property (nonatomic,readonly) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long numChannels;                   //@synthesize numChannels=_numChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numSamples;                    //@synthesize numSamples=_numSamples - In the implementation block
@property (nonatomic,readonly) unsigned long long sampleByteDepth;               //@synthesize sampleByteDepth=_sampleByteDepth - In the implementation block
@property (nonatomic,readonly) unsigned long long startSampleCount;              //@synthesize startSampleCount=_startSampleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long hostTime;                      //@synthesize hostTime=_hostTime - In the implementation block
@property (nonatomic,readonly) BOOL remoteVADAvailable; 
@property (nonatomic,retain) NSData * remoteVAD;                                 //@synthesize remoteVAD=_remoteVAD - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
-(id)initWithXPCObject:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(NSData *)data;
-(unsigned long long)hostTime;
-(id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 remoteVAD:(id)arg7 ;
-(unsigned long long)numSamples;
-(id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 ;
-(id)gainCompensatedChunk;
-(id)dataForChannel:(unsigned long long)arg1 ;
-(NSData *)remoteVAD;
-(id)dataWithRemoteVADWithScaleFactor:(float)arg1 numAudioSamplesPerRemoteVAD:(unsigned long long)arg2 ;
-(unsigned long long)sampleByteDepth;
-(unsigned long long)startSampleCount;
-(void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)remoteVADSubChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 numAudioSamplesPerRemoteVAD:(unsigned long long)arg3 ;
-(void)setRemoteVAD:(NSData *)arg1 ;
-(unsigned long long)numChannels;
-(id)_fidesRecordInfo;
-(id)chunkForChannel:(unsigned long long)arg1 ;
-(BOOL)remoteVADAvailable;
-(id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3 ;
-(void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
