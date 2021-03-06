/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerArray.h>

@interface NSConcretePointerArray : NSPointerArray {

	NSSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;
	BOOL needsCompaction;

}
+(BOOL)supportsSecureCoding;
-(void)addPointer:(void*)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(id)initWithPointerFunctions:(id)arg1 ;
-(void)_markNeedsCompaction;
-(unsigned long long)indexOfPointer:(void*)arg1 ;
-(void)removePointer:(void*)arg1 ;
-(void)arrayGrow:(unsigned long long)arg1 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(id)pointerFunctions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)compact;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

