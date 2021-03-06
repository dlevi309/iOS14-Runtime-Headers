/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <libobjc.A.dylib/_RBDrawableDelegate.h>
#import <libobjc.A.dylib/RBDrawableStatistics.h>

@protocol RBDrawableDelegate, MTLTexture;
@class NSDictionary, RBDevice;

@interface RBDrawable : NSObject <_RBDrawableDelegate, RBDrawableStatistics> {

	unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> >* _drawable;
	spin_lock _statistics_handler_lock;
	objc_ptr<void ()(id<RBDrawableStatistics>)>* _statistics_handler;
	int _initialState;
	RBDevice* _device;
	double _scale;
	unsigned long long _pixelFormat;
	id<RBDrawableDelegate> _delegate;
	id<MTLTexture> _texture;
	CGSize _size;
	SCD_Struct_RB31 _clearColor;

}

@property (nonatomic,readonly) RBDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<RBDrawableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) int initialState;                                    //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB31 clearColor;                          //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<MTLTexture> texture;                              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) double GPUDuration; 
@property (nonatomic,copy,readonly) NSDictionary * statistics; 
@property (nonatomic,copy) id statisticsHandler; 
-(void)setInitialState:(int)arg1 ;
-(int)initialState;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLTexture>)texture;
-(void)finish;
-(id<RBDrawableDelegate>)delegate;
-(unsigned long long)pixelFormat;
-(CGSize)size;
-(NSDictionary *)statistics;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(RBDevice *)device;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setDelegate:(id<RBDrawableDelegate>)arg1 ;
-(void)dumpTexture:(id)arg1 name:(id)arg2 ;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id)statisticsHandler;
-(void)setScale:(double)arg1 ;
-(SCD_Struct_RB31)clearColor;
-(void)setStatisticsHandler:(id)arg1 ;
-(void)setClearColor:(SCD_Struct_RB31)arg1 ;
-(void)_RBDrawableStatisticsDidChange;
-(void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2 ;
-(void)renderDisplayList:(id)arg1 flags:(unsigned)arg2 ;
-(double)GPUDuration;
@end

