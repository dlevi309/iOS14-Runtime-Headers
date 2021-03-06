/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ODICycle.h>

@interface ODICycle5 : ODICycle
+(float)normalizedAngle:(float)arg1 ;
+(BOOL)map1NodeWithState:(id)arg1 ;
+(BOOL)map2NodeWithState:(id)arg1 ;
+(CGRect)mapGSpaceWithState:(id)arg1 ;
+(void)mapNode:(id)arg1 index:(unsigned)arg2 state:(id)arg3 ;
+(void)mapTransition:(id)arg1 index:(unsigned)arg2 state:(id)arg3 ;
+(CGSize)nodeSizeWithState:(id)arg1 ;
+(void)addShapeForNode:(id)arg1 relativeBounds:(CGRect)arg2 state:(id)arg3 ;
+(void)mapStyleForTransition:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(float)intersectionAngleNextToAngle:(float)arg1 isAfter:(BOOL)arg2 state:(id)arg3 ;
+(void)addShapeForTransition:(id)arg1 startAngle:(float)arg2 endAngle:(float)arg3 state:(id)arg4 ;
@end

