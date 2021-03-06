/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSMutableArray, NSMutableData;

@interface ASWBXMLToXMLConverter : NSObject {

	unsigned char _buffer[16384];
	BOOL _done;
	BOOL _oldFormat;
	BOOL _useMetadata;
	BOOL _compact;
	int _state;
	int _wbxmlState;
	int _currentCodePage;
	unsigned _opaqueDataLength;
	int _ppstate;
	char* _bytesToConsumeVector;
	unsigned long long _bytesToConsumeCount;
	char* _bytesToConsumeEnd;
	long long _maxInlineStringLength;
	NSMutableArray* _codePageStack;
	NSMutableArray* _endTagStack;
	NSMutableData* _stringAccumulator;
	unsigned long long _overflowLength;

}

@property (assign,nonatomic) char* bytesToConsumeVector;                          //@synthesize bytesToConsumeVector=_bytesToConsumeVector - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToConsumeCount;              //@synthesize bytesToConsumeCount=_bytesToConsumeCount - In the implementation block
@property (assign,nonatomic) char* bytesToConsumeEnd;                             //@synthesize bytesToConsumeEnd=_bytesToConsumeEnd - In the implementation block
@property (assign,nonatomic) long long maxInlineStringLength;                     //@synthesize maxInlineStringLength=_maxInlineStringLength - In the implementation block
@property (assign,nonatomic) BOOL done;                                           //@synthesize done=_done - In the implementation block
@property (assign,nonatomic) int state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int wbxmlState;                                      //@synthesize wbxmlState=_wbxmlState - In the implementation block
@property (assign,nonatomic) int currentCodePage;                                 //@synthesize currentCodePage=_currentCodePage - In the implementation block
@property (nonatomic,retain) NSMutableArray * codePageStack;                      //@synthesize codePageStack=_codePageStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * endTagStack;                        //@synthesize endTagStack=_endTagStack - In the implementation block
@property (nonatomic,retain) NSMutableData * stringAccumulator;                   //@synthesize stringAccumulator=_stringAccumulator - In the implementation block
@property (assign,nonatomic) unsigned long long overflowLength;                   //@synthesize overflowLength=_overflowLength - In the implementation block
@property (assign,nonatomic) unsigned opaqueDataLength;                           //@synthesize opaqueDataLength=_opaqueDataLength - In the implementation block
@property (assign,nonatomic) int ppstate;                                         //@synthesize ppstate=_ppstate - In the implementation block
@property (assign,nonatomic) BOOL oldFormat;                                      //@synthesize oldFormat=_oldFormat - In the implementation block
@property (assign,nonatomic) BOOL useMetadata;                                    //@synthesize useMetadata=_useMetadata - In the implementation block
@property (assign,nonatomic) BOOL compact;                                        //@synthesize compact=_compact - In the implementation block
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setCompact:(BOOL)arg1 ;
-(BOOL)compact;
-(int)ppstate;
-(void)handleBytesAvailable;
-(int)currentCodePage;
-(void)outputString:(id)arg1 ;
-(void)_resetWBXMLParser;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(void)_consumeBytes;
-(char*)writableBufferPtr;
-(long long)writableBufferSize;
-(id)initUsingMetadata:(BOOL)arg1 ;
-(char*)bytesToConsumeVector;
-(void)setBytesToConsumeVector:(char*)arg1 ;
-(unsigned long long)bytesToConsumeCount;
-(void)setBytesToConsumeCount:(unsigned long long)arg1 ;
-(char*)bytesToConsumeEnd;
-(void)setBytesToConsumeEnd:(char*)arg1 ;
-(long long)maxInlineStringLength;
-(void)setMaxInlineStringLength:(long long)arg1 ;
-(int)wbxmlState;
-(void)setWbxmlState:(int)arg1 ;
-(void)setCurrentCodePage:(int)arg1 ;
-(NSMutableArray *)codePageStack;
-(void)setCodePageStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)endTagStack;
-(void)setEndTagStack:(NSMutableArray *)arg1 ;
-(NSMutableData *)stringAccumulator;
-(void)setStringAccumulator:(NSMutableData *)arg1 ;
-(unsigned long long)overflowLength;
-(void)setOverflowLength:(unsigned long long)arg1 ;
-(unsigned)opaqueDataLength;
-(void)setOpaqueDataLength:(unsigned)arg1 ;
-(void)setPpstate:(int)arg1 ;
-(BOOL)oldFormat;
-(void)setOldFormat:(BOOL)arg1 ;
-(BOOL)useMetadata;
-(void)setUseMetadata:(BOOL)arg1 ;
@end

