/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUPixelFormat;


@protocol NUBufferProvider <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@required
-(NUPixelFormat *)format;
-(SCD_Struct_NU7)size;
-(void)provideBuffer:(/*^block*/id)arg1;

@end

