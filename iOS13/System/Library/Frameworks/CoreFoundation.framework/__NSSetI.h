/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface __NSSetI : NSSet {

	unsigned _used : 58;
	unsigned _szidx : 6;
	id _list[0];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(double)clumpingFactor;
-(double)clumpingInterestingThreshold;
@end

