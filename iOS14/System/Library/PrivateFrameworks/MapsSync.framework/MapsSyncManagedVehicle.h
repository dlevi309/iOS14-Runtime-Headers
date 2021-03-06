/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData, NSUUID, NSNumber;

@interface MapsSyncManagedVehicle : NSManagedObject

@property (copy,nonatomic) NSString * colorHex; 
@property (copy,nonatomic) NSDate * createTime; 
@property (copy,nonatomic) NSData * currentVehicleState; 
@property (copy,nonatomic) NSDate * dateOfVehicleIngestion; 
@property (copy,nonatomic) NSString * displayName; 
@property (copy,nonatomic) NSString * headUnitBluetoothIdentifier; 
@property (copy,nonatomic) NSString * headUnitMacAddress; 
@property (copy,nonatomic) NSString * iapIdentifier; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * lastStateUpdateDate; 
@property (copy,nonatomic) NSString * licensePlate; 
@property (copy,nonatomic) NSString * lprPowerType; 
@property (copy,nonatomic) NSString * lprVehicleType; 
@property (copy,nonatomic) NSString * manufacturer; 
@property (copy,nonatomic) NSString * model; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (copy,nonatomic) NSString * pairedAppIdentifier; 
@property (assign,nonatomic) long long positionIndex; 
@property (copy,nonatomic) NSData * powerByConnector; 
@property (copy,nonatomic) NSString * siriIntentsIdentifier; 
@property (retain,nonatomic) NSNumber * supportedConnectors; 
@property (copy,nonatomic) NSString * vehicleIdentifier; 
@property (retain,nonatomic) NSNumber * vehicleType; 
@property (retain,nonatomic) NSNumber * year; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

