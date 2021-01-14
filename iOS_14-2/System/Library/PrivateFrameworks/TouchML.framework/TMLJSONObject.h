/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TMLObservable.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, TMLJSONSchema, NSData, NSString;

@interface TMLJSONObject : NSObject <NSCopying, TMLObservable> {

	NSDictionary* _rawJSON;
	NSMutableDictionary* _derived;
	NSMutableSet* _observers;
	TMLJSONSchema* _SCHEMA;
	NSData* _DATA;
	NSString* _STRING;

}

@property (setter=CHEMA,nonatomic,readonly) TMLJSONSchema * SCHEMA;              //@synthesize SCHEMA=_SCHEMA - In the implementation block
@property (nonatomic,copy) NSDictionary * rawJSON;                               //@synthesize rawJSON=_rawJSON - In the implementation block
@property (nonatomic,copy) NSData * DATA;                                        //@synthesize DATA=_DATA - In the implementation block
@property (setter=TRING,nonatomic,copy) NSString * STRING;                       //@synthesize STRING=_STRING - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)tmlPropertyWithKeyPath:(id)arg1 ;
-(NSData *)DATA;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(TMLJSONSchema *)SCHEMA;
-(NSString *)STRING;
-(id)initWithSchema:(id)arg1 ;
-(NSDictionary *)rawJSON;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRawJSONSync:(id)arg1 ;
-(void)setRawJSONAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSchema:(id)arg1 json:(id)arg2 ;
-(void)validateJSON:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRawJSON:(NSDictionary *)arg1 ;
-(void)notifyAllObservers;
-(void)internalValidateJSON:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)internalSetJSON:(id)arg1 ;
-(void)setDATA:(NSData *)arg1 ;
-(id)rawValueForKeyPath:(id)arg1 dictionary:(id)arg2 ;
-(void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setSTRING:(NSString *)arg1 ;
@end
