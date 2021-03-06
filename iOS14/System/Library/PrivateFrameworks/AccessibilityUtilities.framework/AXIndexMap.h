/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface AXIndexMap : NSObject <NSCopying, NSCoding> {

	CFDictionaryRef _map;

}
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long*)_createIndexesWithSize:(unsigned long long*)arg1 ;
-(id)_initWithIndexMap:(id)arg1 ;
-(id)_initAndDeepCopyIndexMap:(id)arg1 ;
-(id)initWithObjects:(id*)arg1 andIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3 ;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForIndex:(unsigned long long)arg1 ;
-(void)addObjectsFromIndexMap:(id)arg1 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)description;
-(void)removeAllObjects;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(id)indexes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

