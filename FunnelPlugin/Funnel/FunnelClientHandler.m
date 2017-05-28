//
//  FunnelClientHandler.m
//  Funnel
//
//  Created by Joseph Wilk on 28/05/2017.
//  Copyright © 2017 Keijiro Takahashi. All rights reserved.
//

#import "FunnelClientHandler.h"
#import "Syphon/Syphon.h"

@implementation FunnelClientHandler

-(void)dealloc
{
  [_syphonClient release];
  [_serverName release];
  [super dealloc];
}

@end
