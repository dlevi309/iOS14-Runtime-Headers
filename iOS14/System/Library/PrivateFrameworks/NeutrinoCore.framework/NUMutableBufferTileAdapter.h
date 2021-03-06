/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUMutableBufferTile.h>

@protocol NUMutableBuffer;
@class NSString;

@interface NUMutableBufferTileAdapter : NSObject <NUMutableBufferTile> {

	SCD_Struct_NU8 _frameRect;
	SCD_Struct_NU8 _contentRect;
	id<NUMutableBuffer> _buffer;

}

@property (nonatomic,readonly) id<NUMutableBuffer> mutableBuffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<NUBuffer> buffer; 
@property (nonatomic,readonly) SCD_Struct_NU8 frameRect;                       //@synthesize frameRect=_frameRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU8 contentRect;                     //@synthesize contentRect=_contentRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SCD_Struct_NU8)contentRect;
-(id<NUBuffer>)buffer;
-(SCD_Struct_NU8)frameRect;
-(id<NUMutableBuffer>)mutableBuffer;
-(id)initWithFrameRect:(SCD_Struct_NU8)arg1 contentRect:(SCD_Struct_NU8)arg2 buffer:(id)arg3 ;
@end

