classdef OutputFixedSizeImpl < matlab.System
    % untitled2 Add summary here
    %
    % This template includes the minimum set of functions required
    % to define a System object with discrete state.

    % Public, tunable properties
   properties
      Threshold = 1
   end
  
   properties (DiscreteState)
      Count
   end
  
   methods (Access = protected)
      function setupImpl(obj)
         obj.Count = 0;
      end
    
   function y = stepImpl(obj,u1)
      if (any(u1 > obj.Threshold))
         obj.Count = obj.Count + 1;
      end
      y = obj.Count;
   end
      function resetImpl(obj)
         obj.Count = 0;
      end
    
      function [sz,dt,cp] = getDiscreteStateSpecificationImpl(~,name)
         if strcmp(name,'Count')
            sz = 55000;
            dt = 'double';
            cp = false;
         else
            error(['Error: Incorrect State Name: ', name.']);
         end
      end
      function dataout = getOutputDataTypeImpl(~)
         dataout = 'double';
      end
      function sizeout = getOutputSizeImpl(~)
         sizeout = 55000;
      end
      function cplxout = isOutputComplexImpl(~)
         cplxout = false;
      end
      function fixedout = isOutputFixedSizeImpl(~)
         fixedout = true;
      end
      function flag = isInputSizeMutableImpl(~,idx)
         if idx == 1
           flag = true;
         else
           flag = false;
         end
      end
   end
end