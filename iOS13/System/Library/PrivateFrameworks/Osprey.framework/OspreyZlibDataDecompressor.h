/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


#import <Osprey/Osprey-Structs.h>
@interface OspreyZlibDataDecompressor : NSObject {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(long long)arg1 ;
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

