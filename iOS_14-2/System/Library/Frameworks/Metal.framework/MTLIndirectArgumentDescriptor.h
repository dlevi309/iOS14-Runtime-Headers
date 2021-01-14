/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLIndirectArgumentDescriptor : MTLArgumentDescriptor

@property (assign,nonatomic) unsigned long long dataType; 
@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) unsigned long long arrayLength; 
@property (assign,nonatomic) unsigned long long access; 
@property (assign,nonatomic) unsigned long long textureType; 
@property (assign,nonatomic) unsigned long long constantBlockAlignment; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)indirectArgumentDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
