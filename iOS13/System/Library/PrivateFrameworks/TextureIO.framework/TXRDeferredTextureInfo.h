/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@class TXRTextureInfo, NSMutableArray;

@interface TXRDeferredTextureInfo : NSObject {

	TXRTextureInfo* _info;
	NSMutableArray* _mipmaps;

}

@property (nonatomic,retain) TXRTextureInfo * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mipmaps;              //@synthesize mipmaps=_mipmaps - In the implementation block
-(TXRTextureInfo *)info;
-(void)setInfo:(TXRTextureInfo *)arg1 ;
-(NSMutableArray *)mipmaps;
-(id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3 ;
@end

