/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocationShiftRequest, GEOPolyLocationShiftRequest, PBRequest;

@interface GEOLocationShiftFunctionRequest : NSObject {

	unsigned short _providerID;
	GEOLocationShiftRequest* _locationShiftRequest;
	GEOPolyLocationShiftRequest* _polyLocationShiftRequest;

}

@property (assign,nonatomic) unsigned short providerID;               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE12 coordinate; 
@property (nonatomic,readonly) PBRequest * shiftRequest; 
-(void)dealloc;
-(unsigned short)providerID;
-(void)setProviderID:(unsigned short)arg1 ;
-(id)shiftRequest;
-(SCD_Struct_GE12)coordinate;
-(void)setCoordinate:(SCD_Struct_GE12)arg1 ;
@end
