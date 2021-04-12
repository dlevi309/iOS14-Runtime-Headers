/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDSQLiteDatabase, NSDictionary;

@interface HDEntityEncoder : NSObject {

	HDProfile* _profile;
	HDSQLiteDatabase* _database;
	Class _entityClass;
	NSDictionary* _encodingOptions;
	/*^block*/id _authorizationFilter;
	long long _purpose;
	HDEntityEncoder* _superclassEncoder;

}

@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * encodingOptions;              //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                      //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,readonly) long long purpose;                                //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) HDEntityEncoder * superclassEncoder;              //@synthesize superclassEncoder=_superclassEncoder - In the implementation block
+(long long)estimatedEncodedSize;
-(void)finish;
-(HDSQLiteDatabase *)database;
-(HDProfile *)profile;
-(long long)purpose;
-(Class)entityClass;
-(NSDictionary *)encodingOptions;
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(id)orderedProperties;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(HDEntityEncoder *)superclassEncoder;
-(id)createBareObject;
-(BOOL)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
-(id)authorizationFilter;
@end
