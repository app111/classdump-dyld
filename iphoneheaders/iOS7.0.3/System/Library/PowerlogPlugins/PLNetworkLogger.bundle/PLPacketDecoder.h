/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLNetworkLogger.bundle/PLNetworkLogger
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PLNetworkLogger/PLNetworkLogger-Structs.h>
@interface PLPacketDecoder : NSObject
-(id)decodePacket:(CFDataRef)arg1 ;
-(id)tcpParse:(CFDataRef)arg1 offset:(unsigned char)arg2 ;
-(id)udpParse:(CFDataRef)arg1 offset:(unsigned char)arg2 ;
@end
